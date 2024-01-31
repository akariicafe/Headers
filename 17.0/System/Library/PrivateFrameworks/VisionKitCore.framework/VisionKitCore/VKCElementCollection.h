@class NSString, NSArray;

@interface VKCElementCollection : VKCBaseElement

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *_children;

+ (id)collectionWithTitle:(id)a0 children:(id)a1 parent:(id)a2;
+ (id)collectionWithTitle:(id)a0 elementInfoText:(id)a1 parent:(id)a2;

- (id)children;
- (id)stringValue;
- (void).cxx_destruct;

@end
