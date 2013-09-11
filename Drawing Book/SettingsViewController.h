//
//  SettingsViewController.h
//  Drawing Book
//
//  Created by Ashish Agarwal on 2013-09-11.
//  Copyright (c) 2013 Ashish Agarwal. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol SettingsViewControllerDelegate <NSObject>
-(void)closeSettings : (id)sender;
@end

@interface SettingsViewController : UIViewController{

}
@property CGFloat brush;
@property CGFloat opacity;

@property (strong, nonatomic) IBOutlet UISlider *brushControl;
@property (strong, nonatomic) IBOutlet UISlider *opacityControl;
@property (strong, nonatomic) IBOutlet UIImageView *brushPreview;
@property (strong, nonatomic) IBOutlet UIImageView *opacityPreview;
@property (strong, nonatomic) IBOutlet UILabel *brushValueLabel;
@property (strong, nonatomic) IBOutlet UILabel *opacityValueLabel;

@property (nonatomic, weak) id<SettingsViewControllerDelegate> delegate;

- (IBAction)closeSettings:(id)sender;
- (IBAction)sliderChanged:(id)sender;

@end
