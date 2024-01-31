@class NSString, UITextPosition, UITextDropProposal, UITextRange;
@protocol UIDropSession;

@interface UITextDropRequest : NSObject <UITextDropRequest_Private, UITextDropRequest>

@property (retain, nonatomic) UITextDropProposal *suggestedProposal;
@property (nonatomic, getter=isSameView) BOOL sameView;
@property (readonly, nonatomic) UITextRange *dropRange;
@property (readonly, nonatomic) UITextPosition *dropPosition;
@property (readonly, nonatomic) id<UIDropSession> dropSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPosition:(id)a0 range:(id)a1 inSession:(id)a2;

@end
