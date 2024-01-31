@class NSString;
@protocol SWInteraction;

@interface SXWebContentComponentInteractionHandler : NSObject <SXComponentInteractionHandler>

@property (readonly, nonatomic) id<SWInteraction> interaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithInteraction:(id)a0;
- (void)handleInteractionType:(unsigned long long)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
