@class NSString;

@interface ISDialogTextField : NSObject <SSXPCCoding>

@property long long keyboardType;
@property (getter=isSecure) BOOL secure;
@property (retain) NSString *title;
@property (retain) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textFieldWithTitle:(id)a0;

@end
