@class NSString;

@interface _UIFocusDebuggerStringOutput : NSObject <UIFocusDebuggerOutput> {
    NSString *_outputString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)outputWithString:(id)a0;

@end
