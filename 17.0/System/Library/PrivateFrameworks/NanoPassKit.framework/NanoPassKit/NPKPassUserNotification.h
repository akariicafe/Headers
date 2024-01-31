@class PKPass, NSArray;

@interface NPKPassUserNotification : NPKUserNotification

@property (readonly, nonatomic) PKPass *pass;
@property (readonly, nonatomic) NSArray *identifierHashComponents;

- (void).cxx_destruct;
- (id)initWithPass:(id)a0;

@end
