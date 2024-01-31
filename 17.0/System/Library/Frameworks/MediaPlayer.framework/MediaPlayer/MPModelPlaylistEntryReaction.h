@class NSString, MPModelPlaylistEntry, MPModelSocialPerson, NSDate;

@interface MPModelPlaylistEntryReaction : MPModelObject

@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;
@property (retain, nonatomic) MPModelSocialPerson *socialProfile;
@property (retain, nonatomic) NSString *reactionText;
@property (retain, nonatomic) NSDate *date;

+ (void)__MPModelPropertyPlaylistEntryReactionDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaylistEntryReactionText__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryReactionPlaylistEntry__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryReactionSocialProfile__MAPPING_MISSING__;
+ (id)__date_KEY;
+ (id)__playlistEntry_KEY;
+ (id)__reactionText_KEY;
+ (id)__socialProfile_KEY;

@end
