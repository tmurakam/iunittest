//
//  IUTTestRunnerTest.h
//  iUnitTest
//
//  Created by Katsuyoshi Ito on 09/01/17.
//  Copyright 2009 ITO SOFT DESIGN Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IUTTest.h"
#import "IUTTestRunnerMock.h"


@interface IUTTestRunnerTest : IUTTest {
    IUTTestRunnerMock *runner;
}

@end
