@class UIResponder;
@protocol UIDeferredMenuElementDelegate;

@interface _UIMenuPreparationContext : NSObject <NSCopying>

@property (readonly, weak, nonatomic) id preparer;
@property (readonly, weak, nonatomic) UIResponder *firstResponderTarget;
@property (weak, nonatomic) id<UIDeferredMenuElementDelegate> deferredElementDelegate;
@property (weak, nonatomic) id sender;
@property (nonatomic) BOOL supportsCustomViewMenuElements;
@property (nonatomic) BOOL useSenderAsResponderSender;
@property (nonatomic) BOOL supportsHeaderView;
@property (nonatomic) BOOL tracksSelection;
@property (copy, nonatomic) id /* block */ elementSizeSolver;

+ (id)contextWithPreparer:(id)a0 firstResponderTarget:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
