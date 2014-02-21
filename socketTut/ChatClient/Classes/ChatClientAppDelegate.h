#import <UIKit/UIKit.h>

@class ChatClientViewController;

@interface ChatClientAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ChatClientViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ChatClientViewController *viewController;

@end

