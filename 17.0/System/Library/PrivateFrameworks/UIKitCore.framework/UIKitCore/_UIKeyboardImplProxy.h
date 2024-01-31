@class NSString;
@protocol TIKeyboardInputManagerToImplProtocol;

@interface _UIKeyboardImplProxy : NSObject <TIKeyboardInputManagerToImplProtocol>

@property (weak, nonatomic) id<TIKeyboardInputManagerToImplProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
