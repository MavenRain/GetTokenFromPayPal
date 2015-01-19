//
//  ViewController.h
//  GetTokenFromPayPal
//
//  Created by Onyeka Obi on 1/17/15.
//  Copyright (c) 2015 Onyeka Obi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic,strong,readonly) IBOutlet UIButton* testRun;
@property (nonatomic,strong,readwrite) IBOutlet UILabel* output;
@property (nonatomic,strong,readwrite) NSMutableData* mutableData;

@end

@interface NSData (MBBase64)

+ (id)dataWithBase64EncodedString:(NSString *)string;     //  Padding '=' characters are optional. Whitespace is ignored.
- (NSString *)base64Encoding;

@end

