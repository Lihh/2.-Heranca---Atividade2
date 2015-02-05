//
//  Pessoa.m
//  Atividade2
//
//  Created by Lidia Chou on 2/5/15.
//  Copyright (c) 2015 Lidia Chou. All rights reserved.
//

#import "Pessoa.h"

@implementation Pessoa

-(Pessoa *) initWithNome:(NSString *)n andIdade:(int)i andEndereco:(NSString *)e
{
    self = [super init];
    if (self) {
        nome = n;
        idade = i;
        endereco = e;
    }
    return self;
}

@end
