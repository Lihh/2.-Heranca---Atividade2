//
//  Professor.h
//  Atividade2
//
//  Created by Lidia Chou on 2/5/15.
//  Copyright (c) 2015 Lidia Chou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pessoa.h"

@interface Professor : NSObject
{
    NSString *regimeTrabalho;
    int horasAula;
}

-(Professor *) initWithNome:(NSString *)n andIdade:(int)i andEndereco:(NSString *)e andRegTrab:(NSString *)r andHorasAula:(int)h;


-(void) mudarRegime;
-(void) manterHoras;

@end
