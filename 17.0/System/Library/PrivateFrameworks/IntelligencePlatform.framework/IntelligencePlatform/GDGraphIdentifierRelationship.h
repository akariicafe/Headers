@class NSString, NSArray;

@interface GDGraphIdentifierRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *id;
@property (readonly, copy, nonatomic) NSString *hasProfileImage;
@property (readonly, copy, nonatomic) NSArray *allType;
@property (readonly, copy, nonatomic) NSArray *allId;
@property (readonly, copy, nonatomic) NSArray *allHasProfileImage;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTypeField:(id)a0 idField:(id)a1 hasProfileImageField:(id)a2 allTypeField:(id)a3 allIdField:(id)a4 allHasProfileImageField:(id)a5;

@end
