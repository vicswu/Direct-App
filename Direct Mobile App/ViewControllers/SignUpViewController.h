//
//  SignUpViewController.h
//  Direct Mobile App
//
//  Created by Victor Shijie Wu on 2020-05-21.
//  Copyright © 2020 Victor Shijie Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SignUpViewController : UIViewController {
    __weak IBOutlet UITextField *FirstNameTextField;
    __weak IBOutlet UITextField *LastNameTextField;
    __weak IBOutlet UITextField *EmailTextField;
    __weak IBOutlet UITextField *PasswordTextField;
    __weak IBOutlet UIButton *SignUpButton;
    __weak IBOutlet UILabel *ErrorLabel;
}
@property (weak, nonatomic) IBOutlet UIButton *SignUpTapped;

@end

NS_ASSUME_NONNULL_END
