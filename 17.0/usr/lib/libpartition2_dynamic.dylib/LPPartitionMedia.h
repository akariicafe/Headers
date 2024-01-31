@interface LPPartitionMedia : LPMedia

+ (id)supportedContentTypes;
+ (id)contentTypesForPartitionMedia;
+ (id)primaryMedia;

- (id)children;

@end
