@class NSString;

@interface RTUserNotificationAction : NSObject

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *iconWithSystemImageName;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 title:(id)a1 iconWithSystemImageName:(id)a2 handler:(id /* block */)a3;

@end
