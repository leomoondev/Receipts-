//
//  Tag+CoreDataProperties.m
//  Receipts++
//
//  Created by Hyung Jip Moon on 2017-03-02.
//  Copyright © 2017 leomoon. All rights reserved.
//

#import "Tag+CoreDataProperties.h"

@implementation Tag (CoreDataProperties)

+ (NSFetchRequest<Tag *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Tag"];
}

@dynamic tagName;
@dynamic receipt;

@end
