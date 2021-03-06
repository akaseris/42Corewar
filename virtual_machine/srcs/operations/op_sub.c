/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_sub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 23:04:21 by dhojt             #+#    #+#             */
/*   Updated: 2018/06/19 15:40:21 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				op_sub(t_vm *vm, t_process *ps)
{
	int				r1;
	int				r2;
	int				r3;

	modify_pc_tmp(ps, 1);
	get_next_bytes(vm, ps, &r1, 1);
	get_next_bytes(vm, ps, &r2, 1);
	get_next_bytes(vm, ps, &r3, 1);
	ps->r[get_r(r3)] = ps->r[get_r(r1)] - ps->r[get_r(r2)];
	iterate_pc(ps);
	modify_carry(ps, ps->r[get_r(r3)]);
}
