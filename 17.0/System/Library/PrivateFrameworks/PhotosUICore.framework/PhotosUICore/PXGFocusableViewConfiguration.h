@class NSString;
@protocol PXGFocusableViewDelegate;

@interface PXGFocusableViewConfiguration : NSObject <PXGViewUserData>

@property (weak, nonatomic) id<PXGFocusableViewDelegate> delegate;
@property (nonatomic) long long focusability;
@property (copy, nonatomic) NSString *debugName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
