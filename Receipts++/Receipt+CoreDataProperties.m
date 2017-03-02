//
//  Receipt+CoreDataProperties.m
//  Receipts++
//
//  Created by Hyung Jip Moon on 2017-03-02.
//  Copyright © 2017 leomoon. All rights reserved.
//

#import "Receipt+CoreDataProperties.h"

@implementation Receipt (CoreDataProperties)

+ (NSFetchRequest<Receipt *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Receipt"];
}

@dynamic amount;
@dynamic note;
@dynamic timeStamp;
@dynamic tag;

@end
