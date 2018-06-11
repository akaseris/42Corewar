/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 23:22:57 by dhojt             #+#    #+#             */
/*   Updated: 2018/06/11 15:35:21 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Testprint

#include "virtual_machine.h"

void				test_print(t_vm *vm)
{
	// ft_putstr(vm->memory);
	while (vm->champ)
	{
		printf("NUMBER:     %d\n", vm->champ->number);
		printf("NAME  :     %s\n", vm->champ->name);
		while (vm->champ->number_of_bytes--)
		{
			printf("BYTES :		%c", *vm->champ->bytes);
			vm->champ->bytes++;
		}
		printf("\n");
		while (vm->champ->byte_code)
		{
			printf("%c", vm->champ->byte_code->byte);
			vm->champ->byte_code = vm->champ->byte_code->next;
		}
		vm->champ = vm->champ->next;
	}
}
