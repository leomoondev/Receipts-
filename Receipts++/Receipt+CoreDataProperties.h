//
//  Receipt+CoreDataProperties.h
//  Receipts++
//
//  Created by Hyung Jip Moon on 2017-03-02.
//  Copyright © 2017 leomoon. All rights reserved.
//

#import "Receipt.h"


NS_ASSUME_NONNULL_BEGIN

@interface Receipt (CoreDataProperties)

+ (NSFetchRequest<Receipt *> *)fetchRequest;

@property (nonatomic) float amount;
@property (nullable, nonatomic, copy) NSString *note;
@property (nullable, nonatomic, copy) NSDate *timeStamp;
@property (nullable, nonatomic, retain) Tag *tag;

@end

NS_ASSUME_NONNULL_END
