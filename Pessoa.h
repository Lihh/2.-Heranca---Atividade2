//
//  Pessoa.h
//  Atividade2
//
//  Created by Lidia Chou on 2/5/15.
//  Copyright (c) 2015 Lidia Chou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Pessoa : NSObject
{
    NSString *nome;
    int idade;
    NSString *endereco;
}

-(Pessoa *) initWithNome:(NSString *)n andIdade:(int)i andEndereco:(NSString *)e;

-(void) manterDados;
-(void) mudarEndereco;

@end
