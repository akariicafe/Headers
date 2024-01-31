@class NSString;

@interface _UNNotificationContactServiceMatchDetails : NSObject

@property (copy, nonatomic) NSString *cnContactIdentifier;
@property (copy, nonatomic) NSString *cnContactFullname;
@property (nonatomic) BOOL isSuggestedMatch;

- (void).cxx_destruct;
- (id)initWithCnContactIdentifier:(id)a0 cnContactFullname:(id)a1 isSuggestedContact:(BOOL)a2;

@end
