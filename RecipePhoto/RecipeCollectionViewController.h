//
//  RecipeCollectionViewController.h
//  RecipePhoto
//
//  Created by Radbonus on 18.05.17.
//  Copyright © 2017 Radbonus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) IBOutlet UICollectionView *_Collectionview;

@property (strong, nonatomic) NSArray *recipeImages;

@end
