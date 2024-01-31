@class NSString, GDEntityIdentifier;

@interface GDFactObjectEntityReference : NSObject <GDFactObject>

@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifier:(id)a0;

@end
