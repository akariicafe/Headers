@interface WBSStartPageSectionSerialization : NSObject

+ (id)decodeSectionsFromData:(id)a0 expectedFormat:(long long)a1 allowingFallbackFormats:(BOOL)a2 error:(id *)a3;
+ (id)decodeSectionsWithData:(id)a0 format:(long long)a1 error:(id *)a2;
+ (id)encodeSectionsAsLocalData:(id)a0 error:(id *)a1;
+ (id)encodeSectionsAsSyncableData:(id)a0 existingSyncableData:(id)a1 error:(id *)a2;

@end
