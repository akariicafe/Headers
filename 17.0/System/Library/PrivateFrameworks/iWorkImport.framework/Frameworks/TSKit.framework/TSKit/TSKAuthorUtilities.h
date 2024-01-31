@interface TSKAuthorUtilities : NSObject

+ (BOOL)author:(id)a0 matchesAuthor:(id)a1;
+ (long long)author:(id)a0 matchesPrivateIDs:(id)a1;
+ (BOOL)author:(id)a0 name:(id)a1 matchesOtherAuthor:(id)a2 otherName:(id)a3;
+ (id)displayNameForAuthorName:(id)a0 isPublicAuthor:(BOOL)a1 documentRoot:(id)a2;
+ (BOOL)privateIDMatchesPublicID:(id)a0 privateID:(id)a1;
+ (id)publicIDFromSeed:(id)a0 privateID:(id)a1;
+ (id)publicIDsFromSeed:(id)a0 privateIDs:(id)a1;

@end
