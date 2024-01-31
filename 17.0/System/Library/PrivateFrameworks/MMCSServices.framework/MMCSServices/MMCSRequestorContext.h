@class MMCSController, NSString;

@interface MMCSRequestorContext : NSObject

@property (readonly, retain) MMCSController *controller;
@property (readonly, retain) NSString *transferID;

- (void)dealloc;
- (void)_removeFromController;
- (id)initWithController:(id)a0 transferID:(id)a1;

@end
