
import React, { useState } from 'react';

function ItemSelection() {
  const [items, setItems] = useState([]);
  const [cartItems, setCartItems] = useState([]);
  
  // code for fetching items from backend or hardcoding the list goes here

  return (
    <div>
      <div className="item-selection">
        // code for displaying items goes here
      </div>
      <div className="shopping-cart">
        // code for displaying shopping cart items goes here
      </div>
    </div>
  );
}

export default ItemSelection;

import React from 'react';

function ItemCard({ item }) {
  const addToCart = () => {
    // code for adding the item to the cart goes here
  }

  return (
    <div className="item-card">
      <img src={item.imageUrl} alt={item.name} />
      <h3>{item.name}</h3>
      <p>{item.price}</p>
      <button onClick={addToCart}>Add to cart</button>
    </div>
  );
}



import React, { useState } from 'react';
import ItemCard from './ItemCard';

function ItemSelection() {
  const [items, setItems] = useState([]);
  const [cartItems, setCartItems] = useState([]);

  // code for fetching items from backend or hardcoding the list goes here

  return (
    <div>
      <div className="item-selection-container">
        <div className="item-selection">
          {items.map(item => (
            <ItemCard item={item} key={item.id} />
          ))}
        </div>
      </div>
      <div className="shopping-cart">
        // code for displaying shopping cart items goes here
      </div>
    </div>
  );
}



