//
//  OCRAppDelegate.h
//  OCR
//
//  Created by Robert Carlsen on 04.09.2009.
//
//    Copyright (C) 2009, Robert Carlsen | robertcarlsen.net
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.

#import <UIKit/UIKit.h>

@class OCRDisplayViewController;

@interface OCRAppDelegate : NSObject <UIApplicationDelegate, UIActionSheetDelegate> {
    UIWindow *window;
    OCRDisplayViewController *displayViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;


@end

