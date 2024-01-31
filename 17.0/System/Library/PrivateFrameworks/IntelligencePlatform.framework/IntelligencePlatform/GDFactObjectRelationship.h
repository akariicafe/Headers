@class GDSubentity, NSString;

@interface GDFactObjectRelationship : NSObject <GDFactObject>

@property (readonly, nonatomic) GDSubentity *subentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSubentity:(id)a0;

@end
