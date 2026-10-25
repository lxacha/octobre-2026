/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:46:21 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/25 22:46:21 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlcpy(char *dest,char *src, int n_size){
    int     i;

    i = 0;
    while (src[i] != '\0' && i < n_size){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    printf("%s",dest);
    return i;
}

int main(){
    char dest[20] = "destination";
    char src[20] = " source";
    int     n;

    n = 4;
    ft_strlcpy(dest,src,n);
}