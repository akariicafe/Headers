@class NSString, NSArray;

@interface HRSpeedBumpItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) NSArray *bubbles;
@property (readonly, nonatomic) long long category;
@property (weak, nonatomic) id delegate;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 body:(id)a1 bubbles:(id)a2 category:(long long)a3;

@end
