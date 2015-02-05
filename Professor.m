//
//  Professor.m
//  Atividade2
//
//  Created by Lidia Chou on 2/5/15.
//  Copyright (c) 2015 Lidia Chou. All rights reserved.
//

#import "Professor.h"

@implementation Professor

-(Professor *) initWithNome:(NSString *)n andIdade:(int)i andEndereco:(NSString *)e andRegTrab:(NSString *)r andHorasAula:(int)h
{
    self = [super init];
    if (self) {
        regimeTrabalho = r;
        horasAula = h;
    }
    return self;
}

@end
