@class NSString, NSUUID;

@interface GDHomePerson : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithHMPerson:(id)a0;

@end
