//
//  ViewController.h
//  VTDemoOniPad
//
//  Created by AJB on 16/4/25.
//  Copyright © 2016年 AJB. All rights reserved.
//

#import <UIKit/UIKit.h>
// 编码
#import "H264HwEncoderImpl.h"
@interface ViewController : UIViewController<AVCaptureVideoDataOutputSampleBufferDelegate, H264HwEncoderImplDelegate>


@end

