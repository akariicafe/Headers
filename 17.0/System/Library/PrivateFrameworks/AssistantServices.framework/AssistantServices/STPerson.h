@class NSSet, NSString;

@interface STPerson : STSiriModelObject <AFTranscriptionType>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *contactHandles;
@property (copy, nonatomic) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
