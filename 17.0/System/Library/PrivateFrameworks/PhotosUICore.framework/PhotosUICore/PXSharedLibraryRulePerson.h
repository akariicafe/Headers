@class NSString, PHPerson;
@protocol PXSharedLibraryParticipant;

@interface PXSharedLibraryRulePerson : NSObject {
    PHPerson *_person;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) id<PXSharedLibraryParticipant> participant;

+ (id)rulePersonWithParticipant:(id)a0;
+ (id)rulePersonWithPerson:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)fetchStatusWithCompletion:(id /* block */)a0;

@end
