//
//  Aluno.h
//  Atividade2
//
//  Created by Lidia Chou on 2/5/15.
//  Copyright (c) 2015 Lidia Chou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pessoa.h"

@interface Aluno : NSObject
{
    NSString *curso;
    int periodo;
}

-(Aluno *) initWithNome:(NSString *)n andIdade:(int)i andEndereco:(NSString *)e andCurso:(NSString *)c andPeriodo:(int)p;


-(void) trancarCurso;
-(void) fazerMatricula;

@end
