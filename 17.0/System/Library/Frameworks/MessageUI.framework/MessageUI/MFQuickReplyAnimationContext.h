@class UIView, NSString, NSObject;
@protocol OS_os_log;

@interface MFQuickReplyAnimationContext : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) UIView *snapshot;
@property (retain, nonatomic) UIView *textSnapshot;
@property (retain, nonatomic) UIView *sendButtonSnapshot;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 snapshot:(id)a1 textSnapshot:(id)a2 sendButtonSnapshot:(id)a3;

@end
