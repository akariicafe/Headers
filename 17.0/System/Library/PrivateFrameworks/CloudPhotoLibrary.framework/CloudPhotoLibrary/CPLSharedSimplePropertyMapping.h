@class NSString;

@interface CPLSharedSimplePropertyMapping : NSObject <CPLSharedRecordPropertyMapping>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldUpdatePropertyOnPrivateRecord:(id)a0 recordClass:(Class)a1;
- (BOOL)shouldUpdatePropertyOnSharedRecord:(id)a0 recordClass:(Class)a1;

@end
