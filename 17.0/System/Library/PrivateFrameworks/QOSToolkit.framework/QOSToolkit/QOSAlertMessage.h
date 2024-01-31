@class QOSAlertMessageInternal;

@interface QOSAlertMessage : NSObject

@property (readonly) QOSAlertMessageInternal *underlyingObject;

- (id)body;
- (void).cxx_destruct;
- (id)title;
- (id)initWithTitle:(id)a0 body:(id)a1;

@end
