//
//  Aluno.m
//  Atividade2
//
//  Created by Lidia Chou on 2/5/15.
//  Copyright (c) 2015 Lidia Chou. All rights reserved.
//

#import "Aluno.h"

@implementation Aluno

-(Aluno *) initWithNome:(NSString *)n andIdade:(int)i andEndereco:(NSString *)e andCurso:(NSString *)c andPeriodo:(int)p;
{
    self = [super init];
    if (self) {
        curso = c;
        periodo = p;
    }
    return self;
}

@end
