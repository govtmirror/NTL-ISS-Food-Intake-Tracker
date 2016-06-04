//
//  Media+CoreDataProperties.h
//  FoodIntakeTracker
//
//  Created by PAULO VITOR MAGACHO DA SILVA on 5/31/16.
//  Copyright © 2016 topcoder. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Media.h"

NS_ASSUME_NONNULL_BEGIN

@interface Media (CoreDataProperties)

@property (nullable, nonatomic, retain) NSData *data;
@property (nullable, nonatomic, retain) NSString *filename;

@end

NS_ASSUME_NONNULL_END
