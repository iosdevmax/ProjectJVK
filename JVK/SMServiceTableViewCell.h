//
//  SMServiceTableViewCell.h
//  JVK
//
//  Created by Max&Viktoria on 17/02/2017.
//  Copyright © 2017 Max&Viktoria. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ServiceMO;

@interface SMServiceTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;

- (void)configureCell:(ServiceMO *) model;

@end
