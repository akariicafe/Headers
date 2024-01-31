@class NSString;

@interface CCUIMenuModuleItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, getter=isBusy) BOOL busy;
@property (nonatomic, getter=isSelected) BOOL selected;

- (unsigned long long)hash;
- (BOOL)performAction;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 identifier:(id)a1 handler:(id /* block */)a2;

@end
