@class NSArray, GDEntityIdentifier, NSString;
@protocol GDGraphEntityIdentifier;

@interface GDGraphSongRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) GDEntityIdentifier<GDGraphEntityIdentifier> *songId;
@property (readonly, copy, nonatomic) NSArray *allSongId;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSongIdField:(id)a0 allSongIdField:(id)a1;

@end
