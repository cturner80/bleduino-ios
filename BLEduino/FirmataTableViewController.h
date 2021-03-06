//
//  FirmataTableViewController.h
//  BLEduino
//
//  Created by Ramon Gonzalez on 12/12/13.
//  Copyright (c) 2013 Kytelabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "BDLeManager.h"
#import "BDFirmata.h"
#import "BDBleduino.h"

@class FirmataTableViewController;
@protocol FirmataTableViewControllerDelegate <NSObject>
- (void) firmataTableViewControllerDismissed:(FirmataTableViewController *)controller;
@end

@interface FirmataTableViewController : UITableViewController
<
FirmataServiceDelegate,
BleduinoDelegate,
UIActionSheetDelegate,
UIAlertViewDelegate,
UITextFieldDelegate
>
@property (weak) id <FirmataTableViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *sync;
@property (strong) NSArray *commands;
@property (strong) BDBleduino *firmata;
- (IBAction)sendData:(id)sender;
- (IBAction)resetAllPins:(id)sender;
- (IBAction)dismissModule;
@end
