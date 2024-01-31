@interface HKConceptSynthesizer : NSObject

+ (id)adHocCodingForCodingCollection:(id)a0;
+ (id)_popValueForString:(id)a0 startingFromSubstring:(id)a1 untilSubstring:(id)a2 outRemainderString:(id *)a3 outEndOfString:(BOOL *)a4 error:(id *)a5;
+ (id)_substringsInBetweenSequentialDelimiters:(id)a0 poppableString:(id)a1 outReachedEndOfString:(BOOL *)a2 outStringRemainder:(id *)a3 error:(id *)a4;
+ (id)_synthesizeConceptWithIdentifier:(id)a0 forCodingCollection:(id)a1 additionalAttributes:(id)a2;
+ (id)_synthesizeConceptWithIdentifier:(id)a0 forCodingCollection:(id)a1 prioritizedCodingSystems:(id)a2 addtionalAttributes:(id)a3;
+ (id)bestCodingSystemForDisplayForCodingCollection:(id)a0 prioritizedCodingSystems:(id)a1;
+ (id)bestDisplayNameForCodingCollection:(id)a0;
+ (id)bestDisplayNameForCodingCollection:(id)a0 prioritizedCodingSystems:(id)a1;
+ (id)codingCollectionFromAdHocCode:(id)a0 error:(id *)a1;
+ (id)enumerateCodingsBySystem:(id)a0 prioritizingCodingSystems:(id)a1 handler:(id /* block */)a2;
+ (id)prioritizedCodingSystemsForDisplay;
+ (id)privateCodeCreationCodingSortDescriptors;
+ (id)synthesizeConceptWithIdentifier:(id)a0 forCodingCollection:(id)a1;
+ (id)synthesizeInMemoryConceptForCodingCollection:(id)a0;
+ (id)synthesizeInMemoryConceptForCodingCollection:(id)a0 additionalAttributes:(id)a1;

@end
