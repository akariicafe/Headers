@class NSString;

@interface GDContact : NSObject

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) long long contactType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long participantStatus;

- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 contactType:(long long)a1 displayName:(id)a2 participantStatus:(long long)a3;

@end
