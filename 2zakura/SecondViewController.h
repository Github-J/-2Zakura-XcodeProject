//
//  SecondViewController.h
//  2zakura
//
//  Created by 伊東 純平 on 2013/02/26.
//  Copyright (c) 2013年 伊東 純平. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@interface SecondViewController : UIViewController <UIActionSheetDelegate,UIWebViewDelegate>{
    
     AVAudioPlayer *bgm;
    IBOutlet UIWebView *map;
}
@property (weak, nonatomic) IBOutlet UIWebView *webView;
- (IBAction)presentMenu:(id)sender;
@end