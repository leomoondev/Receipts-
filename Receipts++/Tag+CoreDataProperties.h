//
//  Tag+CoreDataProperties.h
//  Receipts++
//
//  Created by Hyung Jip Moon on 2017-03-02.
//  Copyright © 2017 leomoon. All rights reserved.
//

#import "Tag.h"


NS_ASSUME_NONNULL_BEGIN

@interface Tag (CoreDataProperties)

+ (NSFetchRequest<Tag *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *tagName;
@property (nullable, nonatomic, retain) Receipt *receipt;

@end

NS_ASSUME_NONNULL_END
